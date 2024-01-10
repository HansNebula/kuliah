from selenium import webdriver
from selenium.webdriver.common.by import By 
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from time import sleep

# Set Brave as the browser binary
brave_path = r'C:\Program Files\BraveSoftware\Brave-Browser\Application\brave.exe'  # Replace with the actual path

# Configure the ChromeOptions and set the Chromedriver executable path
options = webdriver.ChromeOptions()
options.binary_location = brave_path

# Set the path to Chromedriver as an option
options.add_argument('webdriver.chrome.driver=C:\\Users\\hatfan\\Documents\\chromeDriver\\chromedriver-win64\\chromedriver.exe')

# Use Chromedriver with Brave
driver = webdriver.Chrome(options=options)

username = "hatfansahrul@gt.student.pens.ac.id"
password = "B6D587CEpens"

url = "https://login.pens.ac.id/cas/login?service=http%3A%2F%2Fethol.pens.ac.id%2Fcas%2F"  # Note the full URL format

driver.get(url)
username_field = driver.find_element(By.ID, "username")
password_field = driver.find_element(By.ID, "password")
submit_button = driver.find_element(By.NAME, "submit")  # Assuming the submit button has a name attribute

# Perform actions
username_field.send_keys(username)
password_field.send_keys(password)
submit_button.click()

driver.get("https://ethol.pens.ac.id/mahasiswa/beranda")

driver.find_element(By.CSS_SELECTOR, ".v-icon.notranslate.mdi.mdi-bell.theme--dark").click()
sleep(1)
driver.find_element(By.CSS_SELECTOR, ".v-input__control").click()
sleep(1)
driver.find_element(By.XPATH, "//div[text()='Presensi']").click()
sleep(1)
while True:
    elementsNotif = driver.find_elements(By.CSS_SELECTOR, '.belumbaca-notifikasi[data-v-207d0ee4]')
    
    if elements:
       break

elementsNotif.click()
#driver.find_element(By.CLASS_NAME, "hover-notifikasi").click()
#driver.find_elements(By.CSS_SELECTOR, '[style*="border-bottom: 0.5px solid rgb(221, 221, 221);"]')
sleep(1)

element_to_click = WebDriverWait(driver, 10).until(
    EC.presence_of_element_located((By.XPATH, "//button//span[contains(text(), 'Akses Kuliah')]"))
)

#driver.find_element(By.XPATH,'//span[@class="v-btn__content" and contains(text(), "Presensi")]').click()
#sleep(1)

# Click on the button element
element_to_click.click()
sleep(1)

element_to_click2 = WebDriverWait(driver, 10).until(
    EC.presence_of_element_located((By.XPATH, "//button//span[contains(text(), 'Presensi')]"))
)
element_to_click2.click()

sleep(90)
driver.quit()

