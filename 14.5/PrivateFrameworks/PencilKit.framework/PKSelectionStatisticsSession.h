//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableArray, NSString;

@interface PKSelectionStatisticsSession : NSObject
{
    NSMutableArray *_selectionGestures;
    NSMutableArray *_selectionActions;
    NSDate *_startTime;
    double _timeSpentSelecting;
    long long _numberOfTimesSelectionWasClearedInASession;
    long long _selectionGestureCount;
    NSString *_lastActionTaken;
    NSString *_lastSignificantActionTaken;
    long long _lastSelectionType;
    long long _lastContentType;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastContentType; // @synthesize lastContentType=_lastContentType;
@property(nonatomic) long long lastSelectionType; // @synthesize lastSelectionType=_lastSelectionType;
@property(retain, nonatomic) NSString *lastSignificantActionTaken; // @synthesize lastSignificantActionTaken=_lastSignificantActionTaken;
@property(retain, nonatomic) NSString *lastActionTaken; // @synthesize lastActionTaken=_lastActionTaken;
@property(nonatomic) long long selectionGestureCount; // @synthesize selectionGestureCount=_selectionGestureCount;
@property(nonatomic) long long numberOfTimesSelectionWasClearedInASession; // @synthesize numberOfTimesSelectionWasClearedInASession=_numberOfTimesSelectionWasClearedInASession;
@property(nonatomic) double timeSpentSelecting; // @synthesize timeSpentSelecting=_timeSpentSelecting;
@property(readonly, nonatomic) NSDictionary *selectionActionDictionary;
@property(readonly, nonatomic) NSDictionary *selectionGestureDictionary;
- (void)logSelectionAction:(long long)arg1;
- (void)logGesture:(long long)arg1 selectionType:(long long)arg2 contentType:(long long)arg3;
- (id)init;

@end

