//
//  ViewController.h
//  Peek-a-Boo
//
//  Created by Nicolas Semenas on 15/08/14.
//  Copyright (c) 2014 Nicolas Semenas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <NSFetchedResultsControllerDelegate>

@property NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

@end
