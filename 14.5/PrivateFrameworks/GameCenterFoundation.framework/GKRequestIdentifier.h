//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSCopying-Protocol.h>

@class NSArray;

@interface GKRequestIdentifier : NSObject <NSCopying>
{
    unsigned long long _savedHash;
    SEL _selector;
    NSArray *_arguments;
}

+ (id)requestIdentifierForInvocation:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) unsigned long long savedHash; // @synthesize savedHash=_savedHash;
- (id)description;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithInvocation:(id)arg1;
- (id)_argumentsForInvocation:(id)arg1;

@end

