//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSupplementaryEnrollment : NSObject
{
    NSString *_kind;
    NSUUID *_enrollmentIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *enrollmentIdentifier; // @synthesize enrollmentIdentifier=_enrollmentIdentifier;
@property(readonly, nonatomic) NSString *kind; // @synthesize kind=_kind;
- (id)description;
- (id)initWithKind:(id)arg1;

@end

