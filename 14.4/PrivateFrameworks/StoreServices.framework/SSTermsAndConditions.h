//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSString;

@interface SSTermsAndConditions : NSObject <NSCopying>
{
    _Bool _requiresAuthentication;
    NSString *_text;
    _Bool _userAccepted;
    long long _versionID;
}

@property(nonatomic, getter=isUserAccepted) _Bool userAccepted; // @synthesize userAccepted=_userAccepted;
@property(readonly, nonatomic) _Bool requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(nonatomic) long long currentVersionIdentifier; // @synthesize currentVersionIdentifier=_versionID;
@property(nonatomic) NSString *currentText; // @synthesize currentText=_text;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithResponseData:(id)arg1 error:(id *)arg2;

@end

