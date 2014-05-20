//
//  VisualizeMenuMasterViewController.h
//  VTDiningMenu
//
//  Created by Jouella Fabe on 1/21/14.
//  Copyright (c) 2014 Jouella Fabe. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface VisualizeMenuMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
