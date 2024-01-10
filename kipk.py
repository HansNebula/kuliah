from selenium import webdriver
from selenium.webdriver.common.by import By
from time import sleep
brave_path = r'C:\Program Files\BraveSoftware\Brave-Browser\Application\brave.exe'  # Replace with the actual path

# Configure the ChromeOptions and set the Chromedriver executable path
options = webdriver.ChromeOptions()
options.binary_location = brave_path

# Set the path to Chromedriver as an option
options.add_argument('webdriver.chrome.driver=C:\\Users\\hatfan\\Documents\\chromeDriver\\chromedriver-win64\\chromedriver.exe')

# Use Chromedriver with Brave
driver = webdriver.Chrome(options=options)

username = "1123.205.08469.1691.739"
password = "6a3ef5"

url = "https://kip-kuliah.kemdikbud.go.id/siswa/auth/login"  # Note the full URL format

driver.get(url)

driver.find_element(By.ID,"no_pendaftaran").send_keys(username)
driver.find_element(By.ID,"kode_akses").send_keys(password)
sleep(1)
driver.find_element(By.CSS_SELECTOR, ".btn.btn-flat").click()

sleep(300)
driver.quit()
