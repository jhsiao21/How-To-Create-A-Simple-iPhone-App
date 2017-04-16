//
//  MasterViewController.h
//  ScaryBugs-Part1
//
//  Created by Logan on 2017/4/6.
//  Copyright © 2017年 com.Logan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "ScaryBugs_Part1+CoreDataModel.h"

@class DetailViewController;

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController<Event *> *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong) NSMutableArray *bugs;

@end

