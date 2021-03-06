//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFPunchout-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFUserActivityData;

@interface SFPunchout : NSObject <SFPunchout, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isRunnableInBackground:1;
    } _has;
    _Bool _isRunnableInBackground;
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_label;
    NSArray *_urls;
    SFUserActivityData *_userActivityData;
    NSString *_actionTarget;
}

+ (_Bool)supportsSecureCoding;
+ (id)punchoutWithURLs:(id)arg1;
+ (id)punchoutWithURL:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isRunnableInBackground; // @synthesize isRunnableInBackground=_isRunnableInBackground;
@property(copy, nonatomic) NSString *actionTarget; // @synthesize actionTarget=_actionTarget;
@property(retain, nonatomic) SFUserActivityData *userActivityData; // @synthesize userActivityData=_userActivityData;
@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasIsRunnableInBackground;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)canOpenURL:(id)arg1;
- (id)preferredOpenableURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

