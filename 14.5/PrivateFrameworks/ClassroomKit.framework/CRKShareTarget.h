//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CATTaskClient, DMFControlGroupIdentifier, NSData, NSDictionary, NSString;

@interface CRKShareTarget : NSObject
{
    _Bool _group;
    _Bool _course;
    _Bool _instructor;
    _Bool _supportsFileURLs;
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_type;
    NSString *_identifier;
    NSString *_displayName;
    NSString *_secondaryName;
    NSData *_iconImageData;
    CATTaskClient *_taskClient;
}

+ (id)sandboxExtensionForPath:(id)arg1;
+ (id)sandboxExtensionsForFileURLs:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CATTaskClient *taskClient; // @synthesize taskClient=_taskClient;
@property(nonatomic) _Bool supportsFileURLs; // @synthesize supportsFileURLs=_supportsFileURLs;
@property(nonatomic, getter=isInstructor) _Bool instructor; // @synthesize instructor=_instructor;
@property(nonatomic, getter=isCourse) _Bool course; // @synthesize course=_course;
@property(nonatomic, getter=isGroup) _Bool group; // @synthesize group=_group;
@property(retain, nonatomic) NSData *iconImageData; // @synthesize iconImageData=_iconImageData;
@property(copy, nonatomic) NSString *secondaryName; // @synthesize secondaryName=_secondaryName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
- (id)description;
- (_Bool)isEqualToShareTarget:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)operationToSendItems:(id)arg1 fromBundleIdentifier:(id)arg2 description:(id)arg3 previewImageData:(id)arg4;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

