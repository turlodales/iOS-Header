//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MAProgressNotification : NSObject
{
    _Bool _isStalled;
    long long _totalExpected;
    long long _totalWritten;
    double _expectedTimeRemaining;
}

@property(nonatomic) double expectedTimeRemaining; // @synthesize expectedTimeRemaining=_expectedTimeRemaining;
@property(nonatomic) _Bool isStalled; // @synthesize isStalled=_isStalled;
@property(nonatomic) long long totalWritten; // @synthesize totalWritten=_totalWritten;
@property(nonatomic) long long totalExpected; // @synthesize totalExpected=_totalExpected;

@end

