//
//  NutritionData.h
//  VTDiningMenu
//
//  Created by Jouella Fabe on 1/21/14.
//  Copyright (c) 2014 Jouella Fabe. All rights reserved.
//

#import <Foundation/Foundation.h>
GENERICSABLE(NutritionData);

@interface NutritionData : NSObject <NutritionData>

@property (nonatomic) NSString *typeNutrition; //type of nutritional facts
@property (nonatomic) NSNumber *amount; //the amount of nutritional 
@end
