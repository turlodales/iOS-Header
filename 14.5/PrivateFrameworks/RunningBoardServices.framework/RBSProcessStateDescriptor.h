//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/NSCopying-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSArray, NSSet, NSString;

@interface RBSProcessStateDescriptor : NSObject <RBSXPCSecureCoding, NSCopying>
{
    NSSet *_endowmentNamespaces;
    unsigned long long _values;
}

+ (_Bool)supportsRBSXPCSecureCoding;
+ (id)descriptor;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long values; // @synthesize values=_values;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)filterState:(id)arg1;
- (id)_endowmentNamespaces;
@property(copy, nonatomic) NSArray *endowmentNamespaces;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

