//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriResponse.h>

@class STSiriContext;

@interface AFContextResponse : AFSiriResponse
{
    STSiriContext *_context;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_context;
- (id)_initWithRequest:(id)arg1 context:(id)arg2;

@end

