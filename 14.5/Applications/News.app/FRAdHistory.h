//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCKeyValueStore, NSDate;

@interface FRAdHistory : NSObject
{
    FCKeyValueStore *_store;
    NSDate *_dateOfLastSave;
}

+ (id)sharedHistory;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *dateOfLastSave; // @synthesize dateOfLastSave=_dateOfLastSave;
@property(retain, nonatomic) FCKeyValueStore *store; // @synthesize store=_store;
- (void)performSaveIfNeeded;
- (void)save;
- (void)dealloc;
- (id)init;

@end

