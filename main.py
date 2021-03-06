import requests
from bs4 import BeautifulSoup
url="https://www.babyneeds.ro/blog/nume-de-baieti-romanesti-alege-i-un-nume-cu-care-se-va-mandri-mereu.htm"

print("Jarvis daca ar fi roman s-ar numi: ")
response=requests.get(url)
soup=BeautifulSoup(response.text,"html.parser")

lista_nume=soup.find_all("ul")
for i in lista_nume:
    nume=i.find("li")
    print(nume)