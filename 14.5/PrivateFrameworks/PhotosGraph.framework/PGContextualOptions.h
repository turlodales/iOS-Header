//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDateComponents, PGManager;

@interface PGContextualOptions : NSObject
{
    PGManager *_manager;
    NSDate *_localToday;
    NSDateComponents *_localTodayComponents;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDateComponents *localTodayComponents; // @synthesize localTodayComponents=_localTodayComponents;
@property(retain, nonatomic) NSDate *localToday; // @synthesize localToday=_localToday;
- (id)availableContextualRules;
- (id)initWithManager:(id)arg1 options:(id)arg2;

@end

