//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Network/NWBrowseDescriptor.h>

@class NSString;

@interface NWBonjourBrowseDescriptor : NWBrowseDescriptor
{
}

+ (id)descriptorWithType:(id)arg1 domain:(id)arg2;
+ (unsigned int)descriptorType;
@property(readonly, nonatomic) NSString *domain;
@property(readonly, nonatomic) NSString *type;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;

@end

