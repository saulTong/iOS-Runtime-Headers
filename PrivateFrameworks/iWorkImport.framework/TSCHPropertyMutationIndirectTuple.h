/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPropertyMutationIndirectTuple : TSCHPropertyMutationTuple {
    unsigned int mStyleOwnerIndex;
    int mStyleOwnerType;
}

@property (nonatomic, readonly) unsigned int index;
@property (nonatomic, readonly) int type;

- (unsigned int)index;
- (id)indirectTuple;
- (id)initWithStyleOwner:(id)arg1 mutations:(id)arg2;
- (id)initWithStyleOwnerType:(int)arg1 index:(unsigned int)arg2 inChart:(id)arg3 mutations:(id)arg4;
- (id)styleOwner;
- (id)styleOwnerRef;
- (int)type;

@end
