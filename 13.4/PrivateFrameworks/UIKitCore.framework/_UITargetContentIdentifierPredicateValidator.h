//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSPredicateVisitor-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITargetContentIdentifierPredicateValidator : NSObject <NSPredicateVisitor>
{
    NSString *_compileTimeIssues;
}

- (void).cxx_destruct;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (_Bool)validatePredicate:(id)arg1 compileTimeIssues:(id *)arg2 runTimeIssues:(id *)arg3;

@end

