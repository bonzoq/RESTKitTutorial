//
//  Article.h
//  Articles
//
//  Created by Marcin on 03.02.2015.
//  Copyright (c) 2015 Marcin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Article : NSManagedObject

@property (nonatomic, retain) NSDate * publish_date;
@property (nonatomic, retain) NSString * source;
@property (nonatomic, retain) NSString * source_url;
@property (nonatomic, retain) NSString * summary;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * url;

@end
