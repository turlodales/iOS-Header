//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSimpleGraphDatabase;

@interface HDSimpleGraphObject : NSObject
{
    HDSimpleGraphDatabase *_database;
    long long _rowID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long rowID; // @synthesize rowID=_rowID;
@property(readonly, nonatomic) __weak HDSimpleGraphDatabase *database; // @synthesize database=_database;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDatabase:(id)arg1 rowID:(long long)arg2;
- (id)init;

@end

