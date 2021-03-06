//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsstandKit/NSSecureCoding-Protocol.h>

@class NKIssue, NSData, NSDictionary, NSString, NSURLConnection, NSURLRequest;

@interface NKAssetDownload : NSObject <NSSecureCoding>
{
    NKIssue *_issue;
    NSString *_identifier;
    NSData *_userInfoData;
    NSURLRequest *_request;
    NSURLConnection *_connection;
    _Bool _attemptedConnection;
    _Bool _isDecodingValid;
}

+ (_Bool)supportsSecureCoding;
@property _Bool attemptedConnection; // @synthesize attemptedConnection=_attemptedConnection;
@property(retain) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain) NSData *userInfoData; // @synthesize userInfoData=_userInfoData;
@property(copy) NSURLRequest *URLRequest; // @synthesize URLRequest=_request;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)downloadWithDelegate:(id)arg1;
- (void)_connectionBackgroundDownloadPostCompleted:(id)arg1;
- (void)_connectionBackgroundDownloadPreCompleted:(id)arg1;
- (_Bool)_isDecodingValid;
- (void)_cancel;
- (_Bool)_attemptedConnection;
- (id)_connection;
- (void)_setIssue:(id)arg1;
- (void)_issueWasRemovedFromLibrary;
@property(copy) NSDictionary *userInfo;
- (void)setIssue:(id)arg1;
@property(readonly) __weak NKIssue *issue; // @synthesize issue=_issue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithURLRequest:(id)arg1 issue:(id)arg2;

@end

