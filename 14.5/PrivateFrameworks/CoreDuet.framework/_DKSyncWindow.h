//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSDate, _DKEvent;

@interface _DKSyncWindow : NSObject <NSCopying>
{
    _DKEvent *_event;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)choppedWindowsFromSortedNormalizedWindows:(id)arg1 betweenWindowMinimumDate:(id)arg2 andWindowMaximumDate:(id)arg3;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

