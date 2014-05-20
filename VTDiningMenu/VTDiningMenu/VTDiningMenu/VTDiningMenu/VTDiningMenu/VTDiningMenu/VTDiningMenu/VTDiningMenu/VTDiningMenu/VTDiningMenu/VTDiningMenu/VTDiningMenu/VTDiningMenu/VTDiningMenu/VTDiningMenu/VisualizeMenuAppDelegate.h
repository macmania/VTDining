//
//  VisualizeMenuAppDelegate.h
//  VTDiningMenu
//
//  Created by Jouella Fabe on 1/21/14.
//  Copyright (c) 2014 Jouella Fabe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VisualizeMenuAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
