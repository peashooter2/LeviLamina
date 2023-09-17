#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/WallConnectionType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WallBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    WallBlock& operator=(WallBlock const&) = delete;
    WallBlock(WallBlock const&)            = delete;
    WallBlock()                            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 5, symbol: ?clip@WallBlock@@UEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_N@Z
    virtual class HitResult
    clip(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool) const;

    // vIndex: 8, symbol: ?getAABB@WallBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;

    // vIndex: 11, symbol:
    // ?getVisualShapeInWorld@WallBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 14, symbol: ?getLiquidClipVolume@WallBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
    virtual bool getLiquidClipVolume(class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 25, symbol: ?canProvideSupport@WallBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 28, symbol: ?canConnect@WallBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const&, uchar, class Block const&) const;

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: __unk_vfn_43
    virtual void __unk_vfn_43();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 46, symbol: __unk_vfn_46
    virtual void __unk_vfn_46();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 49, symbol: __unk_vfn_49
    virtual void __unk_vfn_49();

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 64, symbol: ?canContainLiquid@WallBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 79, symbol: ?onStructureBlockPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 80, symbol: ?onStructureNeighborBlockPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 84, symbol: __unk_vfn_84
    virtual void __unk_vfn_84();

    // vIndex: 98, symbol: ?breaksFallingBlocks@WallBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 101, symbol: ?neighborChanged@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 105, symbol: ?asItemInstance@WallBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 108, symbol: ?getPlacementBlock@WallBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int) const;

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: __unk_vfn_125
    virtual void __unk_vfn_125();

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // vIndex: 131, symbol: __unk_vfn_131
    virtual void __unk_vfn_131();

    // vIndex: 133, symbol:
    // ?buildDescriptionId@WallBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 134, symbol: ?isAuxValueRelevantForPicking@WallBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 143, symbol: ?getVariant@WallBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: ?tick@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 182, symbol: ?getMapColor@WallBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 185, symbol: ?getResourceItem@WallBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // symbol: ?canBeSilkTouched@WallBlock@@MEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?isWallBlock@WallBlock@@UEBA_NXZ
    MCVAPI bool isWallBlock() const;

    // symbol: ??1WallBlock@@UEAA@XZ
    MCVAPI ~WallBlock();

    // symbol: ??0WallBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVBlockLegacy@@@Z
    MCAPI WallBlock(std::string const&, int, class BlockLegacy const&);

    // symbol: ??0WallBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI WallBlock(std::string const&, int, class Material const&);

    // symbol: ?tryFixWallStates@WallBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI void tryFixWallStates(class BlockSource&, class BlockPos const&, int) const;

    // symbol: ?POST_HEIGHT@WallBlock@@2MB
    MCAPI static float const POST_HEIGHT;

    // symbol: ?POST_WIDTH@WallBlock@@2MB
    MCAPI static float const POST_WIDTH;

    // symbol: ?WALL_HEIGHT@WallBlock@@2MB
    MCAPI static float const WALL_HEIGHT;

    // symbol:
    // ?WALL_NAMES@WallBlock@@2V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$0O@@std@@B
    MCAPI static std::array<std::string, 14> const WALL_NAMES;

    // symbol: ?WALL_WIDTH@WallBlock@@2MB
    MCAPI static float const WALL_WIDTH;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_desiredConnectionState@WallBlock@@AEBA?AW4WallConnectionType@@AEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI ::WallConnectionType _desiredConnectionState(class BlockSource&, class BlockPos const&, uchar) const;

    // symbol: ?_getItemInstance@WallBlock@@AEBA?AVItemInstance@@AEBVBlock@@@Z
    MCAPI class ItemInstance _getItemInstance(class Block const&) const;

    // symbol: ?_isCovered@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVAABB@@@Z
    MCAPI bool _isCovered(class BlockSource&, class BlockPos const&, class AABB const&) const;

    // symbol: ?_shouldBePost@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    MCAPI bool _shouldBePost(class BlockSource&, class BlockPos const&, class Block const&) const;

    // symbol: ?_tryAddToTickingQueue@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _tryAddToTickingQueue(class BlockSource&, class BlockPos const&) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION@WallBlock@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION() { return WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION; }

    // NOLINTEND
};
