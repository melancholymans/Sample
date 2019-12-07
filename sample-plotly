import pandas as pd
import requests
from bs4 import BeautifulSoup
import time
from tqdm import tqdm
import plotly.express as px
import numpy as np

def get_lat_lon_from_address(address_l):
    """
    address_lにlistの形で住所を入れてあげると、latlonsという入れ子上のリストで緯度経度のリストを返す関数。
    >>>>get_lat_lon_from_address(['東京都文京区本郷7-3-1','東京都文京区湯島３丁目３０−１'])
    [['35.712056', '139.762775'], ['35.707771', '139.768205']]
    """
    url = 'http://www.geocoding.jp/api/'
    latlons = []
    for address in tqdm(address_l):
        payload = {"v": 1.1, 'q': address}
        r = requests.get(url, params=payload)
        ret = BeautifulSoup(r.content,'lxml')
        if ret.find('error'):
            latlons.append([np.nan,np.nan])
        else:
            lat = ret.find('lat').string
            lon = ret.find('lng').string
            latlons.append([lat,lon])
            time.sleep(30)
    return latlons

df = pd.read_csv("train.csv").iloc[:20,:]
df.drop(["築年数","アクセス","方角","間取り","所在階","バス・トイレ","キッチン", \
    "放送・通信","室内設備","駐車場", "周辺環境", "建物構造", "契約期間"],axis=1,inplace=True)
df.rename(columns={'賃料': 'y_train','所在地':'location','面積':'area'},inplace=True)
df["area"] = df["area"].str.replace("m2","").astype(float)
lst = list(df["location"])
locs = get_lat_lon_from_address(lst)
loc_lat = []
loc_lon = []
for loc in locs:
    loc_lat.append(loc[0])
    loc_lon.append(loc[1])
df["loc_lat"] = loc_lat
df["loc_lon"] = loc_lon
df.dropna(inplace=True)
df["loc_lat"] = df["loc_lat"].astype(float)
df["loc_lon"] = df["loc_lon"].astype(float)
px.set_mapbox_access_token("**")
fig = px.scatter_mapbox(df,lat="loc_lat",lon="loc_lon",color="area",size="y_train")
fig.show()
