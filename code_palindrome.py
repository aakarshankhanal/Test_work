def is_palindrome(text):
    # 1. Clean the text: convert to lowercase and remove spaces
    cleaned_text = "".join(text.lower().split())
    
    # 2. Reverse the cleaned text using Python slicing [::-1]
    reversed_text = cleaned_text[::-1]
    
    # 3. Compare the two and return True or False
    return cleaned_text == reversed_text

# --- Test the function ---
test_word = input("Enter a word or phrase to check: ")

if is_palindrome(test_word):
    print(f"Yes, '{test_word}' is a palindrome!")
else:
    print(f"No, '{test_word}' is not a palindrome.")
