//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAdDeveloper/HTSHTTPMessage.h>

@class HTSHTTPMessageRequest, NSMutableData, NSString;

@interface HTSHTTPMessageResponse : HTSHTTPMessage
{
    int _statusCode;
    NSString *_statusDescription;
    NSString *_trackingDescription;
    HTSHTTPMessageRequest *_request;
    NSMutableData *_serializedData;
    double _sendTime;
    unsigned long long _written;
}

@property(nonatomic) unsigned long long written; // @synthesize written=_written;
@property(nonatomic) double sendTime; // @synthesize sendTime=_sendTime;
@property(retain, nonatomic) NSMutableData *serializedData; // @synthesize serializedData=_serializedData;
@property(retain, nonatomic) HTSHTTPMessageRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *trackingDescription; // @synthesize trackingDescription=_trackingDescription;
@property(copy, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (struct __CFHTTPMessage *)copyMessage;
- (void)dealloc;

@end

