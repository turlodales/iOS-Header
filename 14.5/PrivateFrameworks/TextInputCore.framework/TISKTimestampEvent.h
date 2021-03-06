//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TISKEvent.h>

@interface TISKTimestampEvent : TISKEvent
{
    double _timestamp;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (double)touchUpTimestamp;
- (double)touchDownTimestamp;
- (_Bool)isMissingATouch;
- (id)init:(int)arg1 timestamp:(double)arg2 emojiSearchMode:(_Bool)arg3 order:(long long)arg4;

@end

