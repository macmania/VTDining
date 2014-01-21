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
    NSNumber *_calories;
    NSArray *_totalFat;
    NSNumber *_cholesterol;
    NSNumber *_sodium;
    NSNumber *_carbs;
    NSNumber *_fiber;
    NSNumber *_sugars;
    NSNumber *_protein;
    NSMutableArray *_nutrition; //array that stores other information
}

- (id) initWithCalories:(NSNumber *)calories
                 satFat:(NSNumber *)saturatedFat
               unsatFat:(NSNumber *)unsatFat
            cholesterol:(NSNumber *)cholesterol
                 sodium:(NSNumber *)sodium
                  carbs:(NSNumber *)carbs
                  fiber:(NSNumber *)fiber
                 sugars:(NSNumber *)sugars
                protein:(NSNumber *)protein
              nutrition:(NSMutableArray *) nutrition;
- (id) init; //normal initialization


//setters and getters for the properties of a nutrition data model
@property (nonatomic) NSNumber *calories;
@property (nonatomic) NSArray *totalFat; //shows saturated and unsaturated fat
@property (nonatomic) NSNumber *cholesterol;
@property (nonatomic) NSNumber *sodium;
@property (nonatomic) NSNumber *carbs;
@property (nonatomic) NSNumber *fiber;
@property (nonatomic) NSNumber *sugars;
@property (nonatomic) NSNumber *protein;
@property (nonatomic) NSMutableArray *nutrition; //other nutritional facts - vitamins and minerals

@end
