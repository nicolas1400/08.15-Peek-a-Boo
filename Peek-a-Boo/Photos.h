//
//  Photos.h
//  Peek-a-Boo
//
//  Created by Nicolas Semenas on 15/08/14.
//  Copyright (c) 2014 Nicolas Semenas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Photos : NSManagedObject

@property (nonatomic, retain) NSData * image;
@property (nonatomic, retain) NSManagedObject *users;

@end
