//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath;

@protocol OrderedDataSource <NSObject>
@property(readonly, nonatomic) long long numberOfSections;
@property(readonly, nonatomic) NSArray *orderedObjects;
- (id)objectAtIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)initWithObjects:(NSArray *)arg1;
@end

