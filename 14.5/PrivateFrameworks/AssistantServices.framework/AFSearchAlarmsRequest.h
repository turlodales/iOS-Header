//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class STAlarm;

@interface AFSearchAlarmsRequest : AFSiriRequest
{
    long long _options;
    STAlarm *_criteria;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) STAlarm *criteria; // @synthesize criteria=_criteria;
@property(nonatomic) long long options; // @synthesize options=_options;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponse;

@end

