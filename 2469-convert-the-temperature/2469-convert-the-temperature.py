class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        kelvin = celsius + 273.15
        fahrenheit = celsius*1.8 + 32
        result = []
        result.append(kelvin) 
        result.append(fahrenheit)
        return result
