//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkRequest : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *postData;
@property(retain, nonatomic) RWIProtocolNetworkHeaders *headers;
@property(copy, nonatomic) NSString *method;
@property(copy, nonatomic) NSString *url;
- (id)initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3;

@end

