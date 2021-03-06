//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPAVRoute;

@interface MPAVRoutingControllerSelection : NSObject
{
    MPAVRoute *_route;
    long long _selectionOperation;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long selectionOperation; // @synthesize selectionOperation=_selectionOperation;
@property(retain, nonatomic) MPAVRoute *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRoute:(id)arg1 selectionOperation:(long long)arg2;

@end

