//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKSSShare : NSObject
{
    struct cczp *_field;
    struct ccss_shamir_share *_share;
    unsigned long long _share_size;
}

- (void)dealloc;
- (void)loadInitializedccShare:(struct ccss_shamir_share *)arg1;
- (id)y;
- (unsigned int)x;
- (id)initWithParams:(struct ccss_shamir_parameters *)arg1 share:(struct ccss_shamir_share *)arg2;
- (id)initWithParams:(struct ccss_shamir_parameters *)arg1 x:(unsigned int)arg2 y:(id)arg3;

@end

