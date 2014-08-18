//
//  Users.h
//  Peek-a-Boo
//
//  Created by Nicolas Semenas on 15/08/14.
//  Copyright (c) 2014 Nicolas Semenas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Photos;

@interface Users : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * age;
@property (nonatomic, retain) NSString * location;
@property (nonatomic, retain) Photos *photos;

@end
