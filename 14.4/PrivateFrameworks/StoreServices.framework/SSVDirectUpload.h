//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSError, NSString, NSURL;

@interface SSVDirectUpload : NSObject <SSXPCCoding>
{
    NSString *_categoryName;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesSent;
    NSError *_error;
    _Bool _explicitContent;
    long long _persistentIdentifier;
    long long _state;
    NSString *_subtitle;
    NSURL *_thumbnailImageURL;
    NSString *_title;
    NSString *_uploadKind;
    NSString *_uti;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *UTI; // @synthesize UTI=_uti;
@property(copy, nonatomic, setter=_setUploadKind:) NSString *_uploadKind; // @synthesize _uploadKind;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *thumbnailImageURL; // @synthesize thumbnailImageURL=_thumbnailImageURL;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic, getter=isExplicitContent) _Bool explicitContent; // @synthesize explicitContent=_explicitContent;
@property(nonatomic) long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property(nonatomic) long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)_adoptStatusFromUpload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

