//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDMessageLink, NSString, NSTimeZone;

@interface GEOMessageLink : NSObject
{
    GEOPDMessageLink *_messageLink;
    NSTimeZone *_timeZone;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
- (id)messageBusinessHours;
- (int)responseTime;
@property(readonly, nonatomic) _Bool isVerified;
@property(readonly, nonatomic) NSString *navTintColorString;
@property(readonly, nonatomic) NSString *navBackgroundColorString;
@property(readonly, nonatomic) NSString *messageURLString;
@property(readonly, nonatomic) NSString *messageID;
- (id)initWithMessageLink:(id)arg1;

@end

