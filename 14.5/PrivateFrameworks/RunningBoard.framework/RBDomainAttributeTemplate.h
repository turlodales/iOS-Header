//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, RBEntitlementPredicate;

__attribute__((visibility("hidden")))
@interface RBDomainAttributeTemplate : NSObject
{
    NSArray *_attributeGroups;
    NSString *_domain;
    NSString *_name;
    RBEntitlementPredicate *_originatorEntitlements;
    NSDictionary *_targetBundleProperties;
    RBEntitlementPredicate *_targetEntitlements;
    NSDictionary *_additionalRestrictions;
    NSString *_endowmentNamespace;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *attributeGroups; // @synthesize attributeGroups=_attributeGroups;
- (id)description;

@end

