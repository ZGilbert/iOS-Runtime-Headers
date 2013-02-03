/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPCluster, CPChunk, CPGraphicObject;

@interface CPCompoundGraphicMaker : NSObject <CPDisposable> {
    struct { unsigned int x1; struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
    CPCluster *cluster;
    BOOL disposed;
        } x2; } *groupInfoArray;
    unsigned int groupInfoCount;
    double pageSpread;
    CPChunk *parentChunk;
    unsigned int shapeCount;
    CPGraphicObject **shapes;
    BOOL shapesAreVectorGraphics;
}

+ (BOOL)makeCompoundGraphicsInZonesOf:(id)arg1;

- (void)addGroupInfoWithIndex:(unsigned int)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)coalesceShapeGroups;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (BOOL)findClusterLevel;
- (BOOL)groupOverlappingGraphics;
- (id)initWithGraphicsIn:(id)arg1 ofClass:(Class)arg2;
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (BOOL)makeCompoundGraphics;
- (BOOL)makeCompoundGraphicsFromShapeGroups;

@end