from selenium import webdriver
from selenium.webdriver.common.by import By 
from selenium.webdriver.common.action_chains import ActionChains
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

url = "https://online.mis.pens.ac.id/"  # Note the full URL format

driver.get(url)

element_to_hover = driver.find_element(By.CSS_SELECTOR, "[title='login']")
action = ActionChains(driver)
action.move_to_element(element_to_hover).perform()
driver.find_element(By.CSS_SELECTOR, "[title='login mahasiswa/dosen/staff']").click()

sleep(1)

username_field = driver.find_element(By.ID, "username")
password_field = driver.find_element(By.ID, "password")
submit_button = driver.find_element(By.NAME, "submit")  # Assuming the submit button has a name attribute

# Perform actions
username_field.send_keys(username)
password_field.send_keys(password)
submit_button.click()

element_to_hover = driver.find_element(By.XPATH, "//a[text()='Akademik']")
action = ActionChains(driver)
action.move_to_element(element_to_hover).perform()

driver.find_element(By.XPATH, "//a[text()='Absen']").click()

#driver.get("https://ethol.pens.ac.id/mahasiswa/beranda")
#driver.find_element(By.CSS_SELECTOR, ".v-btn__content").click()
sleep(300)
driver.quit()

