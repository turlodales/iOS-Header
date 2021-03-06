//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordID, NSString;

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying>
{
    unsigned long long _referenceAction;
    CKRecordID *_recordID;
}

+ (_Bool)supportsSecureCoding;
+ (int)ckdpReferenceTypeForCKReferenceAction:(unsigned long long)arg1;
+ (unsigned long long)ckReferenceActionForCKDPRecordReferenceType:(int)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) unsigned long long referenceAction; // @synthesize referenceAction=_referenceAction;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecord:(id)arg1 action:(unsigned long long)arg2;
- (id)initWithRecordID:(id)arg1 action:(unsigned long long)arg2;
- (id)_initBare;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

