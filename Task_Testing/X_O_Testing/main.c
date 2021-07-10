#include "Test_Cases.h"



int main()
{
    TC_ExecuteAndLog();

    return 0;
}









//
//typedef struct
//{
//    uint8_t au8_TC_ID[50];
//    sint8_t u8_TC_ExpectedResult;
//    sint8_t u8_TC_ActualResult;
//    uint8_t au8_TC_ARG_XOCellsData[X_O_SHAPE_CELLS_NUM];
//    uint8_t u8_TC_Status;
//}str_TC_XOGame_displayShape_t;
//
//int main()
//{
//    /*
//     * Test Case Input
//     */
//    uint8_t au8_TC_ARG_XOCellsData_01[X_O_SHAPE_CELLS_NUM] = {'0','1','2','3','4','5','6','7','8'};
//    str_TestCase_XOGame_displayShape_t  str_TC_XOGame_displayShape_01 = {"TC_XOGame_displayShape_01",X_O_ERROR_OK, NULL, au8_TC_ARG_XOCellsData_01,NULL};
//
//    /*
//     * Test Case Execution
//     */
//    str_TC_XOGame_displayShape_01.u8_TC_ActualResult = X_O_displayShape(str_TC_XOGame_displayShape_01.pau8_TC_ARG_XOCellsData);
//
//    /*
//     * Test Case Result
//     */
//    if(str_TC_XOGame_displayShape_01.u8_TC_ActualResult == str_TC_XOGame_displayShape_01.u8_TC_ExpectedResult)
//    {
//        str_TC_XOGame_displayShape_01.u8_TC_Status = TC_PASSED;
//        printf("%s Passed", str_TC_XOGame_displayShape_01.au8_TC_ID);
//    }else{
//        str_TC_XOGame_displayShape_01.u8_TC_Status = TC_FAILED;
//        printf("%s Failed", str_TC_XOGame_displayShape_01.au8_TC_ID);
//    }
//
//
//    return 0;
//}
