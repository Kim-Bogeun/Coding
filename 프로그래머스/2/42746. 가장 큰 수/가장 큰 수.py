def solution(numbers):
    num_str = [str(number) for number in numbers]
    
    num_str.sort(key=lambda x: x*3, reverse=True)
    
    result = "".join(num_str)
    
    result = result.lstrip("0") or "0"
    
    return result