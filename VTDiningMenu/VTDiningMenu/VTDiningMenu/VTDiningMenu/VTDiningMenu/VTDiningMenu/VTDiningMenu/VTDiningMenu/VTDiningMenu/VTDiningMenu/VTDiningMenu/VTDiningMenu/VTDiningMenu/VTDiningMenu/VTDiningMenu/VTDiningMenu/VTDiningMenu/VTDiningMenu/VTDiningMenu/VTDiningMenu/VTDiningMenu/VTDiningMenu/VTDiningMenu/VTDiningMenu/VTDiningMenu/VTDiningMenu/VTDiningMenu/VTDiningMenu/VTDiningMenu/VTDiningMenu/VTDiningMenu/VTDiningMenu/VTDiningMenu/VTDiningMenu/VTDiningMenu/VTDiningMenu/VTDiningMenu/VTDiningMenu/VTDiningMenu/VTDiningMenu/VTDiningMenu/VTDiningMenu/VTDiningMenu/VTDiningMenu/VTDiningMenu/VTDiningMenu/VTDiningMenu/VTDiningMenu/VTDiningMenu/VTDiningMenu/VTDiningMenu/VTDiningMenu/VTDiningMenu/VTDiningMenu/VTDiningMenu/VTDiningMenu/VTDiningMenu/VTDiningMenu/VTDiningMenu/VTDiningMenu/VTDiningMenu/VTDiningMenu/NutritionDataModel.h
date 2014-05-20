//
//  NutritionDataModel.h
//  VTDiningMenu
//  Represents the nutritional facts of a particular food item in a dining facility
//  Created by Jouella Fabe on 1/21/14.
//  Copyright (c) 2014 Jouella Fabe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NutritionDataModel : NSObject {
    NSNumber *_portion; //the portion
    id _converterFormula; //to-do the formula to convert from one measurement to another group
    NSNumber *_totalFat[2];
    NSNumber *_cholesterol;
    NSNumber *_sodium;
    NSNumber *_carbs;
    NSNumber *_fiber;
    NSNumber *_sugars;
    NSNumber *_protein;
    
}

@end
