//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSMessage, NSArray, NSString, PKProtobufShareableCredentialMessage, UIImage;

@interface PKShareableCredentialMessage : NSObject
{
    PKProtobufShareableCredentialMessage *_protoMessage;
    MSMessage *_underlyingMessage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MSMessage *underlyingMessage; // @synthesize underlyingMessage=_underlyingMessage;
- (void)_updateLayoutContents;
- (id)_shareableCredentialMessageDataWithDataURL:(id)arg1;
- (id)_shareableCredentialMessageDataURLWithData:(id)arg1;
- (void)_updateDataURL;
@property(copy, nonatomic) UIImage *passThumbnailImage;
@property(copy, nonatomic) NSString *policyIdentifier;
@property(copy, nonatomic) NSString *caption;
@property(copy, nonatomic) NSArray *shareableCredentials;
@property(copy, nonatomic) NSString *dataString;
- (id)description;
- (id)initWithUnderlyingMessage:(id)arg1;
- (id)init;

@end

