//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSKCOOperationTransformHistoryEntry : NSObject
{
    NSString *_originalOperationString;
    NSString *_transformingOperationString;
    NSString *_resultOperationString;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)applyResult:(const shared_ptr_f167ad79 *)arg1;
- (id)initWithOriginalOperation:(const shared_ptr_f167ad79 *)arg1 transformingOperation:(const shared_ptr_f167ad79 *)arg2;

@end

