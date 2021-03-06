//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MapsSuggestionsTrafficAndETAResult : NSObject
{
    _Bool _isSuccess;
    double _seconds;
    NSString *_shortTrafficString;
    NSString *_longTrafficString;
    NSString *_writtenRouteName;
    NSString *_spokenRouteName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *spokenRouteName; // @synthesize spokenRouteName=_spokenRouteName;
@property(copy, nonatomic) NSString *writtenRouteName; // @synthesize writtenRouteName=_writtenRouteName;
@property(copy, nonatomic) NSString *longTrafficString; // @synthesize longTrafficString=_longTrafficString;
@property(copy, nonatomic) NSString *shortTrafficString; // @synthesize shortTrafficString=_shortTrafficString;
@property(nonatomic) double seconds; // @synthesize seconds=_seconds;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
- (id)initWithGEOTrafficAndETAResult:(id)arg1;

@end

