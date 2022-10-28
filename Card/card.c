#include "card.h"

ST_cardData_t a = {
  ""
  }

  bool check_null(uint8_t min, uint8_t max, uint8_t * str) {
  for (uint8_t i = min;i <= max;i++) {
    if (str[i] == '\0') return true;
    }
  return false;
  }

bool areAllAlpha(uint8_t* str) {
  for (uint8_t i = 0;i < strlen(str);i++) {
    if (!isalpha(str[i])) return false;
    }
  return true;
  }

bool areAllAlpha(uint8_t* str) {
  for (uint8_t i = 0;i < strlen(str);i++) {
    if (!isalpha(str[i])) return false;
    }
  return true;
  }

EN_cardError_t getCardHolderName(ST_cardData_t* cardData) {
  uint8_t name[25];
  printf("Enter the card holder name:\n");
  fgets(name, 25, stdin);
  if (!(check_null(20, 24, name)) || !areAllAlpha(name)) {
    printf("error: WRONG_NAME\n");
    return WRONG_NAME
    };
  printf("CARD_OK\n");
  cardData->cardHolderName = name;
  return CARD_OK;
  }

EN_cardError_t getCardExpiryDate(ST_cardData_t* cardData) {
  uint8_t date[6];
  printf("Enter the card expiry date:\n");
  fgets(date, 6, stdin);
  if (date[5] != '\0' || date[2] != '/' || !isdigit(date[0]) || !isdigit(date[1]) || !isdigit(date[3]) || !isdigit(date[4]) || date[0] + date[1] - 96 > 12) {
    printf("error: WRONG_EXP_DATE\n");
    return WRONG_EXP_DATE
    };
  printf("CARD_OK\n");
  cardData->cardExpirationDate = name;
  return CARD_OK;
  }

EN_cardError_t getCardPAN(ST_cardData_t* cardData) {
  uint8_t pan[20];
  printf("Enter the primary account number:\n");
  fgets(pan, 20, stdin);
  if () {
    printf("error: WRONG_EXP_pan\n");
    return WRONG_EXP_pan
    };
  printf("CARD_OK\n");
  cardData->cardExpirationpan = name;
  return CARD_OK;
  }

void getCardHolderNameTest(void) {
  printf("Tester Name: Nour Magdy\nFunction Name : getCardHolderName\n");
  printf("Test Case 1: 
    Input Data : \"\"
    Expected Result :
  Actual Result : \n");
    printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  }

